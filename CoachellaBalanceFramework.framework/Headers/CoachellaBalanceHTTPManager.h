//
//  CoachellaBalanceHTTPManager.h
//  CoachellaBalanceFramework
//
//  Created by Artem Zolotuhin on 24/12/2018.
//  Copyright © 2018 Peller.Tech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^CoachellaBalanceHTTPManagerSuccessBlockWithResult)(id _Nullable result);
typedef void (^CoachellaBalanceHTTPManagerSuccessBlockWithBalance)(NSNumber *balance);
typedef void (^CoachellaBalanceHTTPManagerFailureBlockWithErrorMessage)(NSString *errorMessage);

@interface CoachellaBalanceHTTPManager : NSObject

+ (void)provideAPIKey:(NSString *)key;

+ (void)fetchUserBalance:(NSString *)userId success:(CoachellaBalanceHTTPManagerSuccessBlockWithBalance)success failure:(CoachellaBalanceHTTPManagerFailureBlockWithErrorMessage)failure;
+ (void)updateUserBalance:(NSString *)userId balance:(float)balance success:(CoachellaBalanceHTTPManagerSuccessBlockWithResult)success failure:(CoachellaBalanceHTTPManagerFailureBlockWithErrorMessage)failure;

@end

NS_ASSUME_NONNULL_END
