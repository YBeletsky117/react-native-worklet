#ifdef __cplusplus
#import "beletsky-react-native-worklet.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReactNativeWorkletSpec.h"

@interface ReactNativeWorklet : NSObject <NativeReactNativeWorkletSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ReactNativeWorklet : NSObject <RCTBridgeModule>
#endif

@end
