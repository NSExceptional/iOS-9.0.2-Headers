/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionCustomExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface OKActionCustom : OKAction <OKActionCustomExports, NSSecureCoding> {

	NSString* _name;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)customActionWithName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

