/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STMediaChannel : STSiriModelObject {

	NSString* _callSign;
	NSString* _channelIdentifier;
	NSString* _name;
	NSURL* _streamUrl;

}

@property (nonatomic,copy) NSString * callSign;                       //@synthesize callSign=_callSign - In the implementation block
@property (nonatomic,copy) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * streamUrl;                       //@synthesize streamUrl=_streamUrl - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)callSign;
-(void)setCallSign:(NSString *)arg1 ;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
@end

