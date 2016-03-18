/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CKSpotlightSearchResult : NSObject {

	NSString* _chatGUID;
	NSString* _messageGUID;
	NSString* _summary;
	NSDate* _messageDate;

}

@property (nonatomic,copy) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;              //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSDate * messageDate;              //@synthesize messageDate=_messageDate - In the implementation block
-(void)setSummary:(NSString *)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(NSString *)chatGUID;
-(NSString *)messageGUID;
-(NSDate *)messageDate;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setChatGUID:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 chatGUID:(id)arg2 ;
-(NSString *)summary;
@end
