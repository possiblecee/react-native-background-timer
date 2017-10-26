//
//  RNBackgroundTimer.h
//  react-native-background-timer
//
//  Created by IjzerenHein on 06-09-2016.
//  Copyright (c) ATO Gear. All rights reserved.
//

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import "RCTEventEmitter.h"

@interface RNBackgroundTimer : RCTEventEmitter <RCTBridgeModule>

@end
