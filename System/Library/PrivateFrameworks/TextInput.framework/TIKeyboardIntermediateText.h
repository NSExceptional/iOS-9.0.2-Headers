/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {

	unsigned long long _selectionOffset;
	NSString* _inputString;
	NSString* _displayString;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * inputString;                //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSRange selectedRange; 
@property (nonatomic,readonly) NSString * searchString;               //@synthesize searchString=_searchString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)selectedRange;
-(NSString *)inputString;
-(NSString *)searchString;
-(id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
@end

