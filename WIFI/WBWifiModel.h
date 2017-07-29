//
//  WBWifiModel.h
//  DingTalkAssistant
//
//  Created by buginux on 2017/7/29.
//  Copyright © 2017年 buginux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SCNetworkReachability.h>

@interface WBWifiModel : NSObject

@property (nonatomic, strong) NSString *interfaceName;
@property (nonatomic, assign) SCNetworkReachabilityFlags flags;

@property (nonatomic, strong) NSString *wifiName;

- (instancetype)initWithInterfaceName:(NSString *)ifname dictionary:(NSDictionary *)dictionary;

@end
