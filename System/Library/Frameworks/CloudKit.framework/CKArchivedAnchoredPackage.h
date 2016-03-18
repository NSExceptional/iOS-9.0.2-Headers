/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding> {

	NSString* _anchorPath;
	NSString* _packagePath;
	NSString* _UUID;
	NSArray* _assets;

}

@property (nonatomic,retain) NSString * anchorPath;               //@synthesize anchorPath=_anchorPath - In the implementation block
@property (nonatomic,retain) NSString * packagePath;              //@synthesize packagePath=_packagePath - In the implementation block
@property (nonatomic,retain) NSString * UUID;                     //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSArray * assets;                    //@synthesize assets=_assets - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)anchorPath;
-(id)initWithCKPackage:(id)arg1 ;
-(void)setAnchorPath:(NSString *)arg1 ;
-(NSString *)packagePath;
-(void)setPackagePath:(NSString *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)UUID;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
@end

