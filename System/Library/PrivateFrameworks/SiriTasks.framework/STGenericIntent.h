/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, AFSiriTask, STGenericIntentRequest;

@interface STGenericIntent : NSObject <NSCoding> {

	BOOL _appInForeground;
	BOOL _isLaunch;
	BOOL _handled;
	BOOL _finishedState;
	NSString* _name;
	NSString* _utterance;
	NSString* _attributes;
	NSMutableDictionary* _parameters;
	AFSiriTask* _siriTask;
	STGenericIntentRequest* _intentRequest;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utterance;                                  //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy) NSString * attributes;                                 //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL appInForeground;                                //@synthesize appInForeground=_appInForeground - In the implementation block
@property (assign,nonatomic) BOOL isLaunch;                                       //@synthesize isLaunch=_isLaunch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) AFSiriTask * siriTask;                               //@synthesize siriTask=_siriTask - In the implementation block
@property (nonatomic,retain) STGenericIntentRequest * intentRequest;              //@synthesize intentRequest=_intentRequest - In the implementation block
@property (assign,nonatomic) BOOL handled;                                        //@synthesize handled=_handled - In the implementation block
@property (assign,nonatomic) BOOL finishedState;                                  //@synthesize finishedState=_finishedState - In the implementation block
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(void)handleWithProgress:(long long)arg1 ;
-(void)finished;
-(id)getPlacesParameter:(id)arg1 ;
-(id)getDateRangeParameter:(id)arg1 ;
-(id)getGroupParameter:(id)arg1 ;
-(id)getPersonParameter:(id)arg1 ;
-(id)getTopicParameter:(id)arg1 ;
-(BOOL)isLaunch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(NSString *)attributes;
-(id)initWithName:(id)arg1 ;
-(void)setAttributes:(NSString *)arg1 ;
-(BOOL)finishedState;
-(void)setFinishedState:(BOOL)arg1 ;
-(AFSiriTask *)siriTask;
-(STGenericIntentRequest *)intentRequest;
-(void)setHandled:(BOOL)arg1 ;
-(void)setSiriTask:(AFSiriTask *)arg1 ;
-(void)setIntentRequest:(STGenericIntentRequest *)arg1 ;
-(void)addParam:(id)arg1 withValue:(id)arg2 ;
-(BOOL)appInForeground;
-(void)setAppInForeground:(BOOL)arg1 ;
-(void)setIsLaunch:(BOOL)arg1 ;
-(BOOL)handled;
@end

