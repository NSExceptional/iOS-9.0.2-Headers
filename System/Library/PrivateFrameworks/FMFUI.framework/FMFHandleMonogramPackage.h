/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, UIImage, NSNumber;

@interface FMFHandleMonogramPackage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _handleIdentifier;
	NSDate* _timestamp;
	UIImage* _image;
	NSNumber* _height;

}

@property (nonatomic,retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSNumber * height;                        //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandleIdentifier:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(NSNumber *)height;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSString *)handleIdentifier;
@end

