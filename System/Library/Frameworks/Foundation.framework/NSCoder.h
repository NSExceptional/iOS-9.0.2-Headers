/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSCoder : NSObject
+(BOOL)__categorizeException:(id)arg1 intoError:(id*)arg2 ;
-(void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)encodeCGAffineTransform:(CGAffineTransform)arg1 forKey:(id)arg2 ;
-(void)encodeUIEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)encodeUIOffset:(UIOffset)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(UIOffset)decodeUIOffsetForKey:(id)arg1 ;
-(void)encodeTheme:(unsigned long long)arg1 ;
-(void)encodeTheme:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)decodeTheme;
-(unsigned long long)decodeThemeForKey:(id)arg1 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(void)encodeCMTime:(SCD_Struct_NS11)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS11)decodeCMTimeForKey:(id)arg1 ;
-(void)encodeCMTimeRange:(SCD_Struct_NS12)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS12)decodeCMTimeRangeForKey:(id)arg1 ;
-(void)encodeCMTimeMapping:(SCD_Struct_NS13)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS13)decodeCMTimeMappingForKey:(id)arg1 ;
-(void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(BOOL)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3 ;
-(id)CA_decodeObjectForKey:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodePoint:(CGPoint)arg1 ;
-(CGPoint)decodePoint;
-(void)encodeSize:(CGSize)arg1 ;
-(CGSize)decodeSize;
-(void)encodeRect:(CGRect)arg1 ;
-(CGRect)decodeRect;
-(id)__tryDecodeObjectForKey:(id)arg1 error:(id*)arg2 decodeBlock:(/*^block*/id)arg3 ;
-(BOOL)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3 ;
-(void)__failWithExternalError:(id)arg1 ;
-(long long)decodingFailurePolicy;
-(void)__setError:(id)arg1 ;
-(BOOL)__failWithException:(id)arg1 ;
-(id)error;
-(void)failWithError:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(void)encodeBycopyObject:(id)arg1 ;
-(id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)requiresSecureCoding;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(id)allowedClasses;
-(BOOL)validateClassSupportsSecureCoding:(Class)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(id)decodeTopLevelObjectAndReturnError:(id*)arg1 ;
-(id)decodeObjectForKey:(id)arg1 error:(id*)arg2 ;
-(void)encodeLong:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeLongForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateAllowedClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(unsigned)systemVersion;
-(int)decodeIntForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeDataObject;
-(id)decodeObject;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
@end

