/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libamsupport.dylib/libamsupport.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSURLSession, NSDictionary, NSString;

@interface AMSupportURLSession : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	NSMutableDictionary* _responses;
	NSMutableDictionary* _data;
	NSMutableDictionary* _completions;
	NSURLSession* _session;
	NSDictionary* _options;

}

@property (retain) NSDictionary * options;                                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responses;                 //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completions;               //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)session;
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeout;
-(void)dealloc;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSMutableDictionary *)responses;
-(void)setResponses:(NSMutableDictionary *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setCompletions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)completions;
-(void)sendRequest:(CFHTTPMessageRef)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultSessionConfigurationWithIdentifier:(id)arg1 ;
-(id)_defaultSession;
-(id)_urlRequestForHTTPMessage:(CFHTTPMessageRef)arg1 ;
@end

