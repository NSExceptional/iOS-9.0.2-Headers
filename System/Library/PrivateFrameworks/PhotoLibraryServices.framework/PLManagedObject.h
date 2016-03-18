/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (nonatomic,copy,readonly) NSString * pl_shortDescription; 
-(PLPhotoLibrary *)photoLibrary;
-(void)willSave;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(NSString *)pl_shortDescription;
-(NSString *)shortObjectIDURI;
@end

