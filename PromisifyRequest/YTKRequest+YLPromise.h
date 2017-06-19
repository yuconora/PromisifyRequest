//
//  YTKRequest+YLPromise.h
//  PromisifyRequest
//
//  Created by le yu on 2017/6/19.
//  Copyright © 2017年 le yu. All rights reserved.
//

#if __has_include(<YTKNetwork/YTKNetwork.h>)
#import <YTKNetwork/YTKNetwork.h>
#else
#import "YTKNetwork.h"
#endif
#if __has_include(<PromiseKit/PromiseKit.h>)
#import <PromiseKit/PromiseKit.h>
#else
#import "PromiseKit"
#endif

@interface YTKRequest (YLPromise)
/**
 * YTKRequest+Promise 简单封装
 * return AnyPromise
 */
- (AnyPromise *)yl_promise;
@end
