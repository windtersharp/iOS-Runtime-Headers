/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRegionBookmark : PBCodable <NSCopying> {
    GEOMapRegion * _region;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasRegion;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, retain) GEOMapRegion *region;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRegion;
- (BOOL)hasTitle;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
