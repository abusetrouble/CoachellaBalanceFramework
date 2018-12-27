//
//  QRScanHelper.h
//  CoachellaBalanceFramework
//
//  Created by Artem Zolotuhin on 24/12/2018.
//  Copyright © 2018 Peller.Tech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CoachellaBalanceQRScanHelper : NSObject

- (instancetype)initWithPreviewView:(UIView *)view;
- (void)startScanning:(void (^)(NSArray *codes))result failure:(void (^)(NSString *errorMessage))failure;
- (void)stopScanning;

@end

NS_ASSUME_NONNULL_END
