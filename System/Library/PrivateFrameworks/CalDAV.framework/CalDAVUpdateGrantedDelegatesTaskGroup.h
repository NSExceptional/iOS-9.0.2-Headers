/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVTaskGroupDelegate.h>

@class NSSet, CalDAVGetGrantedDelegatesTaskGroup, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {

	int _state;
	NSSet* _addWriteURLs;
	NSSet* _addReadURLs;
	NSSet* _removeURLs;
	NSSet* _updatedWriteURLs;
	NSSet* _updatedReadURLs;
	CalDAVGetGrantedDelegatesTaskGroup* _getGrantedDelegatesTaskGroup;

}

@property (assign,nonatomic) int state;                                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSSet * addWriteURLs;                                                           //@synthesize addWriteURLs=_addWriteURLs - In the implementation block
@property (nonatomic,retain) NSSet * addReadURLs;                                                            //@synthesize addReadURLs=_addReadURLs - In the implementation block
@property (nonatomic,retain) NSSet * removeURLs;                                                             //@synthesize removeURLs=_removeURLs - In the implementation block
@property (nonatomic,retain) NSSet * updatedWriteURLs;                                                       //@synthesize updatedWriteURLs=_updatedWriteURLs - In the implementation block
@property (nonatomic,retain) NSSet * updatedReadURLs;                                                        //@synthesize updatedReadURLs=_updatedReadURLs - In the implementation block
@property (nonatomic,retain) CalDAVGetGrantedDelegatesTaskGroup * getGrantedDelegatesTaskGroup;              //@synthesize getGrantedDelegatesTaskGroup=_getGrantedDelegatesTaskGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)state;
-(void)setState:(int)arg1 ;
-(void)startTaskGroup;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setAddWriteURLs:(NSSet *)arg1 ;
-(void)setAddReadURLs:(NSSet *)arg1 ;
-(void)setRemoveURLs:(NSSet *)arg1 ;
-(void)setGetGrantedDelegatesTaskGroup:(CalDAVGetGrantedDelegatesTaskGroup *)arg1 ;
-(CalDAVGetGrantedDelegatesTaskGroup *)getGrantedDelegatesTaskGroup;
-(NSSet *)updatedWriteURLs;
-(NSSet *)updatedReadURLs;
-(NSSet *)addWriteURLs;
-(NSSet *)addReadURLs;
-(NSSet *)removeURLs;
-(void)setUpdatedWriteURLs:(NSSet *)arg1 ;
-(void)setUpdatedReadURLs:(NSSet *)arg1 ;
-(void)_fetchExistingGrantedDelegates;
-(void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(BOOL)arg2 ;
-(void)_updateDelegatesWithAllowWrite:(BOOL)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5 ;
@end

