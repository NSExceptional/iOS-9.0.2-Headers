/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short mSeparator;
	CFArrayRef mFormatters;
	NSMutableSet* mFormatStrings;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(unsigned short)separator;
-(id)formatStrings;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 ;
@end

