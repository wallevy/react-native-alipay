#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <UIKit/UIKit.h>
#import <AlipaySDK/AlipaySDK.h>

@interface RNAlipay : NSObject<RCTBridgeModule>

+(void) handleCallback:(NSURL *)url;

@end