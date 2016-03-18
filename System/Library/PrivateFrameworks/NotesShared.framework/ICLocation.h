/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSString;

@interface ICLocation : NSManagedObject {

	BOOL updatingPlace;

}

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,retain) CLPlacemark * placemark; 
@property (assign,nonatomic) BOOL updatingPlace; 
@property (nonatomic,readonly) NSString * formattedAddress; 
+(id)searchStringsForPlacemark:(id)arg1 ;
-(NSString *)formattedAddress;
-(void)setLocationFromURL:(id)arg1 ;
-(BOOL)updatingPlace;
-(void)setUpdatingPlace:(BOOL)arg1 ;
-(id)searchStrings;
@end

