/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString;

@interface MFRecentsSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _queryOptions;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8 ;
-(void)dealloc;
-(unsigned long long)type;
-(void)main;
@end

