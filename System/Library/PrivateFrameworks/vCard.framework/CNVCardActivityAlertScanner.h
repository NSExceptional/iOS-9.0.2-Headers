/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}
+(BOOL)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(BOOL)scanPastItemDelimiter;
-(id)scanStringValue;
-(BOOL)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(BOOL)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg1 ;
-(void)scanPastWhitespace;
-(BOOL)atEnd;
-(void)dealloc;
-(unsigned long long)position;
-(id)initWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
@end

