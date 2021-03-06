/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteProbeProvider, OS_dispatch_queue;
@class CNAutocompleteFetchRequest, _CNAutocompleteUserSessionDisplayedResults, NSDate, CNAutocompleteUsageMonitor, NSObject;

@interface CNAutocompleteUserSession : NSObject {

	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteFetchRequest* _currentRequest;
	unsigned long long _currentBatch;
	_CNAutocompleteUserSessionDisplayedResults* _lastDisplayedResults;
	NSDate* _requestStartTime;
	CNAutocompleteUsageMonitor* _usageMonitor;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,retain) CNAutocompleteFetchRequest * currentRequest;                                    //@synthesize currentRequest=_currentRequest - In the implementation block
@property (assign,nonatomic) unsigned long long currentBatch;                                                //@synthesize currentBatch=_currentBatch - In the implementation block
@property (nonatomic,retain) _CNAutocompleteUserSessionDisplayedResults * lastDisplayedResults;              //@synthesize lastDisplayedResults=_lastDisplayedResults - In the implementation block
@property (nonatomic,retain) NSDate * requestStartTime;                                                      //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,retain) CNAutocompleteUsageMonitor * usageMonitor;                                      //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                         //@synthesize syncQueue=_syncQueue - In the implementation block
-(void)setCurrentRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNAutocompleteFetchRequest *)currentRequest;
-(id)initWithProbeProvider:(id)arg1 ;
-(_CNAutocompleteUserSessionDisplayedResults *)lastDisplayedResults;
-(void)setCurrentBatch:(unsigned long long)arg1 ;
-(CNAutocompleteUsageMonitor *)usageMonitor;
-(unsigned long long)currentBatch;
-(void)setLastDisplayedResults:(_CNAutocompleteUserSessionDisplayedResults *)arg1 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)didStartExecutingRequest:(id)arg1 ;
-(void)didReceiveResults:(id)arg1 forRequest:(id)arg2 ;
-(void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(void)setUsageMonitor:(CNAutocompleteUsageMonitor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_resetState;
-(NSDate *)requestStartTime;
-(void)setRequestStartTime:(NSDate *)arg1 ;
@end

