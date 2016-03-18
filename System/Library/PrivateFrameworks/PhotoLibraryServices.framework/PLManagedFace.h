/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset, NSString;

@interface PLManagedFace : PLManagedObject

@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) CGRect relativeRect; 
@property (assign,nonatomic) short identifier; 
@property (nonatomic,retain) NSString * albumUUID; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
-(void)delete;
-(void)setRelativeRect:(CGRect)arg1 ;
-(CGRect)relativeRect;
@end

