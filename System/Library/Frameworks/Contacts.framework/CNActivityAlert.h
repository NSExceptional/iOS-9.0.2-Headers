/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _sound;
	NSString* _vibration;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * sound;                        //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSString * vibration;                    //@synthesize vibration=_vibration - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 userInfo:(id)arg3 ;
-(void)setVibration:(NSString *)arg1 ;
-(NSString *)vibration;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)sound;
-(void)setSound:(NSString *)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
@end

