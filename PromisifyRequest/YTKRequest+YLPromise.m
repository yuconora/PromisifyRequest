//
//  YTKRequest+YLPromise.m
//  PromisifyRequest
//
//  Created by le yu on 2017/6/19.
//  Copyright © 2017年 le yu. All rights reserved.
//

#import "YTKRequest+YLPromise.h"
@implementation YTKRequest (YLPromise)
- (AnyPromise *)yl_promise {
    return [AnyPromise promiseWithResolverBlock:^(PMKResolver(resolver)) {
        [self startWithCompletionBlockWithSuccess:^(__kindof YTKBaseRequest * _Nonnull request) {
            if (request.responseObject) {
                resolver(request.responseObject);
            }else{
                //上传图片的时候 这个地方可能会没有错误数据返回 做异常处理
                id info = @{
                            NSLocalizedDescriptionKey: @"Errors Like: Image data is too big or reject",
                            NSURLErrorFailingURLStringErrorKey: request.response.URL.absoluteString,
                            NSURLErrorFailingURLErrorKey: request.response.URL
                            };
                NSError *err = [NSError errorWithDomain:NSURLErrorDomain code:NSURLErrorCannotDecodeContentData userInfo:info];
                resolver(err);
            }
        } failure:^(__kindof YTKBaseRequest * _Nonnull request) {
            resolver(request.error);
        }];
    }];
}
@end
