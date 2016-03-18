/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {

	int _type;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) int type;                               //@synthesize type=_type - In the implementation block
+(id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4 ;
+(id)postPrivacySettingsForPrivacyOptions:(id)arg1 ;
+(int)_privacySettingTypeFromTypeIdentifier:(id)arg1 ;
+(id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_parametersJSONStringRepresentation;
-(id)parametersFormValueString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

