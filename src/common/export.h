#ifndef _BAROLI_COMMON_EXPORT_H_
#define _BAROLI_COMMON_EXPORT_H_

#ifdef _BUILDING_BAROLI
#define QX_BAROLI_COMMON_DLL_EXPORT QX_DLL_EXPORT_HELPER
#else // _BUILDING_BAROLI
#define QX_BAROLI_COMMON_DLL_EXPORT QX_DLL_IMPORT_HELPER
#endif // _BUILDING_BAROLI

#ifdef _BUILDING_BAROLI
#define QX_REGISTER_HPP_BAROLI_COMMON QX_REGISTER_HPP_EXPORT_DLL
#define QX_REGISTER_CPP_BAROLI_COMMON QX_REGISTER_CPP_EXPORT_DLL
#else // _BUILDING_BAROLI
#define QX_REGISTER_HPP_BAROLI_COMMON QX_REGISTER_HPP_IMPORT_DLL
#define QX_REGISTER_CPP_BAROLI_COMMON QX_REGISTER_CPP_IMPORT_DLL
#endif // _BUILDING_BAROLI

#endif // _BAROLI_COMMON_EXPORT_H_