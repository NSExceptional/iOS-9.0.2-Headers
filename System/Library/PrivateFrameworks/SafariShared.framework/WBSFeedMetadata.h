/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSFeedMetadata : NSObject <NSSecureCoding> {

	NSString* _title;
	NSURL* _imageURL;
	NSURL* _homepageURL;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSURL * homepageURL;              //@synthesize homepageURL=_homepageURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(NSURL *)homepageURL;
-(id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3 ;
-(NSURL *)imageURL;
@end
