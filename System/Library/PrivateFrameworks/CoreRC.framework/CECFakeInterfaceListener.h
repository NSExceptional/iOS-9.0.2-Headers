/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCInterfaceListener.h>

@interface CECFakeInterfaceListener : CoreRCInterfaceListener
-(BOOL)interface:(id)arg1 sendFrame:(CECFrame)arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)interface:(id)arg1 pingTo:(unsigned char)arg2 acknowledged:(BOOL*)arg3 error:(id*)arg4 ;
-(id)fakeAddInterfaceWithProperties:(id)arg1 ;
-(BOOL)interface:(id)arg1 setAddressMask:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)interface:(id)arg1 setPromiscMode:(BOOL)arg2 error:(id*)arg3 ;
@end

