/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>

@class NSURL, CalDAVPrincipalEmailDetailsResult, NSString, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	CalDAVPrincipalEmailDetailsResult* _principalResult;

}

@property (nonatomic,retain) NSURL * principalURL;                                             //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain,readonly) NSSet * addresses; 
@property (nonatomic,retain) CalDAVPrincipalEmailDetailsResult * principalResult;              //@synthesize principalResult=_principalResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)addresses;
-(NSString *)displayName;
-(void)startTaskGroup;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)setPrincipalResult:(CalDAVPrincipalEmailDetailsResult *)arg1 ;
-(void)_processPropFind:(id)arg1 ;
-(CalDAVPrincipalEmailDetailsResult *)principalResult;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 ;
-(NSURL *)principalURL;
@end

