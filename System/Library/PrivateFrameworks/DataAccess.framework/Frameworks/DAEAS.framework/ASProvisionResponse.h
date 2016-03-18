/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	BOOL _remoteWipe;
	NSString* _policyType;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)policies;
-(void)_setStatus:(id)arg1 ;
-(id)init;
-(id)description;
-(id)status;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(BOOL)remoteWipe;
-(id)initWithPolicyType:(id)arg1 ;
-(id)policyType;
@end

