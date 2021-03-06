/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXNotificationRegistrationContainer, _CFXNotificationRegistrar;

@interface _CFXNotificationRegistrationBase : NSObject {

	_CFXNotificationRegistrationContainer* _parent;
	os_lock_handoff_s* _lock;

}

@property (__weak,readonly) _CFXNotificationRegistrationContainer * parent; 
@property (readonly) _CFXNotificationRegistrar * registrar; 
@property (readonly) void* key; 
+(const SCD_Struct_CF1*)keyCallbacks;
-(_CFXNotificationRegistrar *)registrar;
-(void)dealloc;
-(id)init;
-(void*)key;
-(id)initWithParent:(id)arg1 ;
-(_CFXNotificationRegistrationContainer *)parent;
-(void)setParent:(_CFXNotificationRegistrationContainer *)arg1 ;
-(void)removeFromParent;
@end

