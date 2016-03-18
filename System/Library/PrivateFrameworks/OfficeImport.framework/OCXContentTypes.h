/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface OCXContentTypes : NSObject {

	NSMutableArray* mContentTypes;
	NSMutableSet* mDefaultTypes;
	NSMutableDictionary* mContentTypeObjectMap;
	NSMutableDictionary* mContentTypeCountMap;

}
+(id)relativePathForPath:(id)arg1 currentPath:(id)arg2 ;
-(void)populateCommonExtensions;
-(id)uniquePathForPath:(id)arg1 ;
-(void)addContentTypeForContentType:(id)arg1 extension:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3 ;
-(id)pathForKey:(id)arg1 ;
-(id)pathForContentType:(id)arg1 ;
-(id)pathForMainDocument;
-(BOOL)containsContentType:(id)arg1 ;
-(BOOL)containsContentType:(id)arg1 withKey:(id)arg2 ;
-(BOOL)isLastEntryContentType:(id)arg1 ;
-(void)writeContentTypesToStream:(id)arg1 ;
@end

