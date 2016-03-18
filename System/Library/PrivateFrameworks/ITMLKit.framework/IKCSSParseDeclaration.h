/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject {

	BOOL _important;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL important;               //@synthesize important=_important - In the implementation block
-(void)setImportant:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)important;
@end

