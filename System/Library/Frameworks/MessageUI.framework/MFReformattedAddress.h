/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFReformattedAddress : NSObject {

	NSString* _address;
	NSRange _middleTruncationRange;

}

@property (nonatomic,readonly) NSString * localPart; 
@property (nonatomic,readonly) NSString * domainPart; 
@property (assign,nonatomic) NSRange middleTruncationRange;              //@synthesize middleTruncationRange=_middleTruncationRange - In the implementation block
-(id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(id)initWithAddress:(id)arg1 ;
-(double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(NSString *)localPart;
-(void)setMiddleTruncationRange:(NSRange)arg1 ;
-(NSRange)middleTruncationRange;
-(NSString *)domainPart;
-(void)dealloc;
-(id)description;
@end

