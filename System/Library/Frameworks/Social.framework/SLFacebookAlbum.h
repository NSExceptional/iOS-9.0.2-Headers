/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {

	BOOL _canUpload;
	BOOL _isDefaultAlbum;
	NSString* _identifier;
	NSString* _name;
	NSString* _coverPhotoIdentifier;
	long long _count;

}

@property (retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * coverPhotoIdentifier;              //@synthesize coverPhotoIdentifier=_coverPhotoIdentifier - In the implementation block
@property (assign) long long count;                              //@synthesize count=_count - In the implementation block
@property (assign) BOOL canUpload;                               //@synthesize canUpload=_canUpload - In the implementation block
@property (assign) BOOL isDefaultAlbum;                          //@synthesize isDefaultAlbum=_isDefaultAlbum - In the implementation block
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
+(id)albumWithDataDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)canUpload;
-(void)setIsDefaultAlbum:(BOOL)arg1 ;
-(NSString *)coverPhotoIdentifier;
-(BOOL)isDefaultAlbum;
-(void)setCoverPhotoIdentifier:(NSString *)arg1 ;
-(void)setCanUpload:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCount:(long long)arg1 ;
@end
