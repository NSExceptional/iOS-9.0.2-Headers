/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SUGradientColorStop : NSObject <NSCoding> {

	double _r;
	double _g;
	double _b;
	double _a;
	double _offset;
	CGColorRef _rawColor;

}

@property (nonatomic,readonly) double offset; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(double)offset;
-(CGColorRef)copyCGColor;
-(id)initWithColor:(CGColorRef)arg1 offset:(double)arg2 ;
@end

