/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection {

	EDResources* mResources;
	EDWorksheet* mWorksheet;

}
-(void)dealloc;
-(id)columnInfoForColumnNumber:(int)arg1 ;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(id)columnInfoCreateIfNilForColumnNumber:(int)arg1 ;
@end

