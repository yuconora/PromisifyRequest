//
//  PromisifyRequest.h
//  PromisifyRequest
//
//  Created by le yu on 2017/6/19.
//  Copyright © 2017年 le yu. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _PROMISIFYREQUEST_
    #define _PROMISIFYREQUEST_

#if __has_include(<PromisifyRequest/PromisifyRequest.h>)

    FOUNDATION_EXPORT double PromisifyRequestVersionNumber;
    FOUNDATION_EXPORT const unsigned char PromisifyRequestVersionString[];

    #import <PromisifyRequest/YTKRequest+YLPromise.h>
#else 

    #import "YTKRequest+YLPromise.h"

#endif /* __has_include */

#endif /* _PROMISIFYREQUEST_ */


