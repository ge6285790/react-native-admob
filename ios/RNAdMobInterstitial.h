#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventDispatcher.h>
#else
#import <React/RCTBridgeModule.h>
#import <React/RCTEventDispatcher.h>
#endif

@import GoogleMobileAds;

@interface RNAdMobInterstitial : NSObject <RCTBridgeModule, GADInterstitialDelegate>
@end
