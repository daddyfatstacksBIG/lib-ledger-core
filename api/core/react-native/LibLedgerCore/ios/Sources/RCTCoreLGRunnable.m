// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#import "RCTCoreLGRunnable.h"


@implementation RCTCoreLGRunnable
//Export module
RCT_EXPORT_MODULE(RCTCoreLGRunnable)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGRunnable alloc] init];
    }
    return self;
}

/**Trigger runnable execution */
RCT_EXPORT_METHOD(run) {

    [self.objcImpl run];
}
@end
