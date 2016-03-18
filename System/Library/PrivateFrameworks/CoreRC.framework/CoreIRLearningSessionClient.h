/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRLearningSession.h>

@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession {

	CoreRCManagerClient* _manager;

}

@property (assign,nonatomic) CoreRCManagerClient * manager;              //@synthesize manager=_manager - In the implementation block
-(void)setManager:(CoreRCManagerClient *)arg1 ;
-(CoreRCManagerClient *)manager;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
@end

