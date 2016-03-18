/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABExperimentResponse, NSLock, NSMutableArray, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABExperimentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	NSLock* _experimentObserversLock;

}

@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setServerProxyClass:(Class)arg1 ;
+(id)sharedConfiguration;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
-(void)_debug_forceUpdate;
-(id)_debug_configurationDate;
-(id)_debug_defaultQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)dealloc;
-(id)init;
-(id)detailedDescription;
-(void)removeExperimentObserver:(id)arg1 ;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(id)experimentURLForURL:(id)arg1 type:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(id)experimentAssignmentForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)experimentAssignments;
-(GEOABExperimentResponse *)experimentsInfo;
@end

