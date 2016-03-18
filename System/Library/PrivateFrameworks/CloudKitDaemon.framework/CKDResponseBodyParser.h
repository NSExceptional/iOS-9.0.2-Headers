/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CKDResponseBodyParser <NSObject>
@property (nonatomic,readonly) NSError * parserError; 
@property (nonatomic,copy) id objectParsedBlock; 
@required
-(NSError *)parserError;
-(void)setObjectParsedBlock:(/*^block*/id)arg1;
-(void)processData:(id)arg1;
-(void)finishWithCompletion:(/*^block*/id)arg1;
-(id)objectParsedBlock;

@end

