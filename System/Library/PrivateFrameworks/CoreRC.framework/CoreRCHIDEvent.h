/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CoreRCHIDEvent : NSObject <NSSecureCoding, NSCopying> {

	IOHIDEventRef _event;
	IOHIDEventRef _3rdPartyChildEvent;

}
+(BOOL)supportsSecureCoding;
-(BOOL)getCECUserControl:(CECUserControl*)arg1 pressed:(BOOL*)arg2 ;
-(id)initWithCECUserControl:(CECUserControl)arg1 pressed:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IOHIDEventRef)event;
-(id)initWithIOHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initKeyboardEventWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 pressed:(BOOL)arg3 ;
-(void)getCommand:(unsigned long long*)arg1 pressed:(BOOL*)arg2 ;
-(id)initWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 ;
-(BOOL)isEqualToRCHIDEvent:(id)arg1 ;
-(BOOL)isRepeat;
@end

