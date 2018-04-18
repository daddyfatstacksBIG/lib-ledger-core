// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGError.h"
#import <Foundation/Foundation.h>


/**
 *Callback triggered by main completed task,
 *returns optional result as list of template type T
 */
@protocol LGStringListCallback

/**
 * Method triggered when main task complete
 * @params result optional of type list<T>, non null if main task failed
 * @params error optional of type Error, non null if main task succeeded
 */
- (void)onCallback:(nullable NSArray<NSString *> *)result
             error:(nullable LGError *)error;

@end
