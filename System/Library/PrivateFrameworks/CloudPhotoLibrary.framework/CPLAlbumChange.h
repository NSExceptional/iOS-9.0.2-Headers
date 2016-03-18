/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLContainerChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {

	NSString* _keyAssetIdentifier;
	BOOL _albumSortAscending;
	unsigned long long _albumType;
	NSString* _name;
	long long _position;
	NSString* _parentIdentifier;
	unsigned long long _albumSortType;

}

@property (assign,nonatomic) unsigned long long albumType;                  //@synthesize albumType=_albumType - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long position;                            //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;                     //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long albumSortType;              //@synthesize albumSortType=_albumSortType - In the implementation block
@property (assign,nonatomic) BOOL albumSortAscending;                       //@synthesize albumSortAscending=_albumSortAscending - In the implementation block
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)propertiesDescription;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSString *)parentIdentifier;
-(unsigned long long)albumType;
-(BOOL)albumSortAscending;
-(unsigned long long)albumSortType;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(void)setAlbumType:(unsigned long long)arg1 ;
-(void)setAlbumSortType:(unsigned long long)arg1 ;
-(void)setAlbumSortAscending:(BOOL)arg1 ;
@end

