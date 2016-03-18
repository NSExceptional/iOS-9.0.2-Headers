/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _openid;
	NSURL* _objectID;

}

@property (nonatomic,copy) NSString * openid;               //@synthesize openid=_openid - In the implementation block
@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSURL *)objectID;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setOpenid:(NSString *)arg1 ;
-(NSString *)openid;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setObjectID:(NSURL *)arg1 ;
@end

