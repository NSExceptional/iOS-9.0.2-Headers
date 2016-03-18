/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSSet, NSMutableSet;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	NSString* _displayName;
	NSURL* _resourceID;
	NSSet* _emailAddresses;
	NSSet* _collections;
	NSSet* _principalSearchProperties;
	BOOL _isExpandPropertyReportSupported;
	BOOL _fetchPrincipalSearchProperties;
	BOOL _shouldIgnoreHomeSetOnDifferentHost;
	NSMutableSet* _redirectHistory;

}

@property (nonatomic,readonly) NSURL * principalURL;                                                 //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSURL * resourceID;                                                   //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) NSSet * emailAddresses;                                               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSSet * collections;                                                  //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) NSSet * principalSearchProperties;                                    //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
@property (nonatomic,readonly) BOOL isExpandPropertyReportSupported;                                 //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign,nonatomic) BOOL fetchPrincipalSearchProperties;                                    //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;                                //@synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)collections;
-(NSSet *)emailAddresses;
-(void)dealloc;
-(NSString *)description;
-(NSString *)displayName;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(BOOL)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)homeSet;
-(BOOL)forceOptionsRequest;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(NSSet *)principalSearchProperties;
-(BOOL)isExpandPropertyReportSupported;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(NSURL *)resourceID;
-(BOOL)shouldIgnoreHomeSetOnDifferentHost;
-(void)coaxServerForPrincipalHeaders;
-(void)_taskCompleted:(id)arg1 withError:(id)arg2 ;
-(void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3 ;
-(void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)arg1 ;
-(NSURL *)principalURL;
@end

