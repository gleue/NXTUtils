//
//  NXTDeviceManager.h
//  MINDcode
//
//  Created by Jeff Sawatzky on 2013-01-14.
//  Copyright (c) 2013 Jeff Sawatzky. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <NXTKit/NXTKit.h>

#import "NXTDevice.h"

extern NSString *const kNXTDeviceManagerDidOpenDeviceNotification;
extern NSString *const kNXTDeviceManagerDidFailToOpenDeviceNotification;
extern NSString *const kNXTDeviceManagerDidCloseDeviceNotification;


@interface NXTDeviceManager : NSObject <MRDeviceDelegate>

@property (nonatomic, strong, readonly) NXTDevice *device;

- (BOOL)isConnected;
- (void)connect;

+ (NXTDeviceManager *) defaultManager;

@end
