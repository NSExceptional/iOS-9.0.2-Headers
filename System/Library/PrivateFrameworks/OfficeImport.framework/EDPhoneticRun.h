/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPhoneticRun : NSObject {

	unsigned mCharIndex;
	unsigned mBaseCharIndex;
	unsigned mBaseCharCount;

}
-(id)init;
-(id)description;
-(unsigned)charIndex;
-(unsigned)charBaseIndex;
-(unsigned)charBaseCount;
-(void)setCharBaseIndex:(unsigned)arg1 ;
-(void)setCharBaseCount:(unsigned)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(void)setCharIndex:(unsigned)arg1 ;
@end
