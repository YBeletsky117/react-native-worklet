import { NativeModules, Platform } from 'react-native';

const LINKING_ERROR =
  `The package '@beletsky/react-native-worklet' doesn't seem to be linked. Make sure: \n\n` +
  Platform.select({ ios: "- You have run 'pod install'\n", default: '' }) +
  '- You rebuilt the app after installing the package\n' +
  '- You are not using Expo Go\n';

const ReactNativeWorklet = NativeModules.ReactNativeWorklet
  ? NativeModules.ReactNativeWorklet
  : new Proxy(
      {},
      {
        get() {
          throw new Error(LINKING_ERROR);
        },
      }
    );

export function multiply(a: number, b: number): Promise<number> {
  return ReactNativeWorklet.multiply(a, b);
}
