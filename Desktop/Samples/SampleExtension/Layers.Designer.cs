﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.5420
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace SampleExtension {
    using System;
    
    
    /// <summary>
    ///   A strongly-typed resource class, for looking up localized strings, etc.
    /// </summary>
    // This class was auto-generated by the StronglyTypedResourceBuilder
    // class via a tool like ResGen or Visual Studio.
    // To add or remove a member, edit your .ResX file then rerun ResGen
    // with the /str option, or rebuild your VS project.
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("System.Resources.Tools.StronglyTypedResourceBuilder", "2.0.0.0")]
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    internal class Layers {
        
        private static global::System.Resources.ResourceManager resourceMan;
        
        private static global::System.Globalization.CultureInfo resourceCulture;
        
        [global::System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal Layers() {
        }
        
        /// <summary>
        ///   Returns the cached ResourceManager instance used by this class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Resources.ResourceManager ResourceManager {
            get {
                if (object.ReferenceEquals(resourceMan, null)) {
                    global::System.Resources.ResourceManager temp = new global::System.Resources.ResourceManager("SampleExtension.Layers", typeof(Layers).Assembly);
                    resourceMan = temp;
                }
                return resourceMan;
            }
        }
        
        /// <summary>
        ///   Overrides the current thread's CurrentUICulture property for all
        ///   resource lookups using this strongly typed resource class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Globalization.CultureInfo Culture {
            get {
                return resourceCulture;
            }
            set {
                resourceCulture = value;
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;AreaRule&gt;
        ///  &lt;LegendLabel&gt;%s&lt;/LegendLabel&gt;
        ///  &lt;Filter&gt;%s&lt;/Filter&gt;
        ///  &lt;AreaSymbolization2D&gt;
        ///    &lt;Fill&gt;
        ///      &lt;FillPattern&gt;Solid&lt;/FillPattern&gt;
        ///      &lt;ForegroundColor&gt;%s&lt;/ForegroundColor&gt;
        ///      &lt;BackgroundColor&gt;FF000000&lt;/BackgroundColor&gt;
        ///    &lt;/Fill&gt;
        ///    &lt;Stroke&gt;
        ///      &lt;LineStyle&gt;Solid&lt;/LineStyle&gt;
        ///      &lt;Thickness&gt;1&lt;/Thickness&gt;
        ///      &lt;Color&gt;FF000000&lt;/Color&gt;
        ///      &lt;Unit&gt;Points&lt;/Unit&gt;
        ///      &lt;SizeContext&gt;DeviceUnits&lt;/SizeContext&gt;
        ///    &lt;/Stroke&gt;
        ///  &lt;/AreaSymbolization2D&gt;
        ///&lt;/AreaRule&gt;
        ///.
        /// </summary>
        internal static string arearule {
            get {
                return ResourceManager.GetString("arearule", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;AreaTypeStyle&gt;%s&lt;/AreaTypeStyle&gt;
        ///.
        /// </summary>
        internal static string areatypestyle {
            get {
                return ResourceManager.GetString("areatypestyle", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
        ///
        ///  &lt;LayerDefinition xmlns:xsi=&quot;http://www.w3.org/2001/XMLSchema-instance&quot; xmlns:xsd=&quot;http://www.w3.org/2001/XMLSchema&quot; xsi:noNamespaceSchemaLocation=&quot;LayerDefinition-1.1.0.xsd&quot; version=&quot;1.1.0&quot;&gt;
        ///    &lt;VectorLayerDefinition&gt;
        ///      &lt;ResourceId&gt;&lt;/ResourceId&gt;
        ///      &lt;FeatureName&gt;BufferClass&lt;/FeatureName&gt;
        ///      &lt;FeatureNameType&gt;FeatureClass&lt;/FeatureNameType&gt;
        ///      &lt;Geometry&gt;BufferGeometry&lt;/Geometry&gt;
        ///      &lt;VectorScaleRange&gt;
        ///        &lt;AreaTypeStyle&gt;
        ///          &lt;AreaRule&gt;
        ///         [rest of string was truncated]&quot;;.
        /// </summary>
        internal static string BufferLayerDefinition {
            get {
                return ResourceManager.GetString("BufferLayerDefinition", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
        ///&lt;LayerDefinition xmlns:xsi=&quot;http://www.w3.org/2001/XMLSchema-instance&quot; xsi:noNamespaceSchemaLocation=&quot;LayerDefinition-2.4.0.xsd&quot; version=&quot;2.4.0&quot;&gt;
        ///  &lt;VectorLayerDefinition&gt;
        ///    &lt;ResourceId&gt;%s&lt;/ResourceId&gt;
        ///    &lt;FeatureName&gt;%s&lt;/FeatureName&gt;
        ///    &lt;FeatureNameType&gt;FeatureClass&lt;/FeatureNameType&gt;
        ///    &lt;Geometry&gt;%s&lt;/Geometry&gt;
        ///    %s
        ///  &lt;/VectorLayerDefinition&gt;
        ///&lt;/LayerDefinition&gt;
        ///.
        /// </summary>
        internal static string layerdefinition {
            get {
                return ResourceManager.GetString("layerdefinition", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;LineRule&gt;
        ///  &lt;LegendLabel&gt;%s&lt;/LegendLabel&gt;
        ///  &lt;Filter&gt;%s&lt;/Filter&gt;
        ///  &lt;LineSymbolization2D&gt;
        ///    &lt;LineStyle&gt;Solid&lt;/LineStyle&gt;
        ///    &lt;Thickness&gt;1&lt;/Thickness&gt;
        ///    &lt;Color&gt;%s&lt;/Color&gt;
        ///    &lt;Unit&gt;Points&lt;/Unit&gt;
        ///    &lt;SizeContext&gt;DeviceUnits&lt;/SizeContext&gt;
        ///  &lt;/LineSymbolization2D&gt;
        ///&lt;/LineRule&gt;
        ///.
        /// </summary>
        internal static string linerule {
            get {
                return ResourceManager.GetString("linerule", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;LineTypeStyle&gt;%s&lt;/LineTypeStyle&gt;
        ///.
        /// </summary>
        internal static string linetypestyle {
            get {
                return ResourceManager.GetString("linetypestyle", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;W2D&gt;
        ///  &lt;Unit&gt;Points&lt;/Unit&gt;
        ///  &lt;SizeContext&gt;DeviceUnits&lt;/SizeContext&gt;
        ///  &lt;SizeX&gt;%s&lt;/SizeX&gt;
        ///  &lt;SizeY&gt;%s&lt;/SizeY&gt;
        ///  &lt;Rotation&gt;0&lt;/Rotation&gt;
        ///  &lt;MaintainAspect&gt;true&lt;/MaintainAspect&gt;
        ///  &lt;W2DSymbol&gt;
        ///    &lt;ResourceId&gt;%s&lt;/ResourceId&gt;
        ///    &lt;LibraryItemName&gt;%s&lt;/LibraryItemName&gt;
        ///  &lt;/W2DSymbol&gt;
        ///  &lt;FillColor&gt;%s&lt;/FillColor&gt;
        ///  &lt;LineColor&gt;FF000000&lt;/LineColor&gt;
        ///  &lt;TextColor&gt;FF000000&lt;/TextColor&gt;
        ///&lt;/W2D&gt;.
        /// </summary>
        internal static string marksymbol {
            get {
                return ResourceManager.GetString("marksymbol", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
        ///&lt;LayerDefinition version=&quot;1.1.0&quot; xmlns:xsi=&quot;http://www.w3.org/2001/XMLSchema-instance&quot; xmlns:xsd=&quot;http://www.w3.org/2001/XMLSchema&quot; xsi:noNamespaceSchemaLocation=&quot;LayerDefinition-1.1.0.xsd&quot;&gt;
        ///  &lt;VectorLayerDefinition&gt;
        ///    &lt;ResourceId&gt;&lt;/ResourceId&gt;
        ///    &lt;FeatureName&gt;ParcelMarkerClass&lt;/FeatureName&gt;
        ///    &lt;FeatureNameType&gt;FeatureClass&lt;/FeatureNameType&gt;
        ///    &lt;Geometry&gt;ParcelLocation&lt;/Geometry&gt;
        ///    &lt;VectorScaleRange&gt;
        ///      &lt;MinScale&gt;0&lt;/MinScale&gt;
        ///      &lt;MaxScale&gt;10000&lt;/MaxScale&gt;
        /// [rest of string was truncated]&quot;;.
        /// </summary>
        internal static string ParcelMarker {
            get {
                return ResourceManager.GetString("ParcelMarker", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;PointRule&gt;
        ///  &lt;LegendLabel&gt;%s&lt;/LegendLabel&gt;
        ///  &lt;Filter&gt;%s&lt;/Filter&gt;
        ///  &lt;Label&gt;%s&lt;/Label&gt;
        ///  &lt;PointSymbolization2D&gt;%s&lt;/PointSymbolization2D&gt;
        ///&lt;/PointRule&gt;
        ///.
        /// </summary>
        internal static string pointrule {
            get {
                return ResourceManager.GetString("pointrule", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;PointTypeStyle&gt;
        ///  &lt;DisplayAsText&gt;false&lt;/DisplayAsText&gt;
        ///  &lt;AllowOverpost&gt;false&lt;/AllowOverpost&gt;
        ///  %s
        ///&lt;/PointTypeStyle&gt;
        ///.
        /// </summary>
        internal static string pointtypestyle {
            get {
                return ResourceManager.GetString("pointtypestyle", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;
        ///&lt;LayerDefinition xmlns:xsd=&quot;http://www.w3.org/2001/XMLSchema&quot; version=&quot;1.3.0&quot; xmlns:xsi=&quot;http://www.w3.org/2001/XMLSchema-instance&quot; xsi:noNamespaceSchemaLocation=&quot;LayerDefinition-1.3.0.xsd&quot;&gt;
        ///	&lt;VectorLayerDefinition&gt;
        ///		&lt;ResourceId&gt;Library://Samples/Sheboygan/Data/Parcels.FeatureSource&lt;/ResourceId&gt;
        ///		&lt;FeatureName&gt;SHP_Schema:Parcels&lt;/FeatureName&gt;
        ///		&lt;FeatureNameType&gt;FeatureClass&lt;/FeatureNameType&gt;
        ///		&lt;PropertyMapping&gt;
        ///			&lt;Name&gt;NAME&lt;/Name&gt;
        ///			&lt;Value&gt;NAME&lt;/Value&gt;
        ///		&lt;/ [rest of string was truncated]&quot;;.
        /// </summary>
        internal static string RecentlyBuilt {
            get {
                return ResourceManager.GetString("RecentlyBuilt", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;?xml version=&quot;1.0&quot;?&gt;
        ///&lt;LayerDefinition xmlns:xsi=&quot;http://www.w3.org/2001/XMLSchema-instance&quot; xmlns:xsd=&quot;http://www.w3.org/2001/XMLSchema&quot; xsi:noNamespaceSchemaLocation=&quot;LayerDefinition-1.0.0.xsd&quot; version=&quot;1.0.0&quot;&gt;
        ///  &lt;VectorLayerDefinition&gt;
        ///    &lt;ResourceId&gt;{0}&lt;/ResourceId&gt;
        ///    &lt;FeatureName&gt;{1}&lt;/FeatureName&gt;
        ///    &lt;FeatureNameType&gt;FeatureClass&lt;/FeatureNameType&gt;
        ///    &lt;Geometry&gt;{2}&lt;/Geometry&gt;
        ///    &lt;VectorScaleRange&gt;
        ///      &lt;AreaTypeStyle&gt;
        ///        &lt;AreaRule&gt;
        ///          &lt;LegendLabel /&gt;
        ///          &lt;AreaSymboliz [rest of string was truncated]&quot;;.
        /// </summary>
        internal static string Redline {
            get {
                return ResourceManager.GetString("Redline", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;VectorScaleRange&gt;
        ///  &lt;MinScale&gt;%s&lt;/MinScale&gt;
        ///  &lt;MaxScale&gt;%s&lt;/MaxScale&gt;
        ///  %s
        ///&lt;/VectorScaleRange&gt;
        ///.
        /// </summary>
        internal static string scalerange {
            get {
                return ResourceManager.GetString("scalerange", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to If you see this message, it is because I am a component that was automatically invoked by the AppLayout&apos;s InvokeOnStartup property. 
        ///
        ///These samples requires the Sheboygan dataset loaded. If you haven&apos;t loaded this package, you load the package and map after this message from the &quot;File&quot; menu..
        /// </summary>
        internal static string StartupText {
            get {
                return ResourceManager.GetString("StartupText", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to &lt;Unit&gt;Points&lt;/Unit&gt;
        ///&lt;SizeContext&gt;DeviceUnits&lt;/SizeContext&gt;
        ///&lt;SizeX&gt;%s&lt;/SizeX&gt;
        ///&lt;SizeY&gt;%s&lt;/SizeY&gt;
        ///&lt;Rotation&gt;0&lt;/Rotation&gt;
        ///&lt;Text&gt;%s&lt;/Text&gt;
        ///&lt;FontName&gt;Arial&lt;/FontName&gt;
        ///&lt;ForegroundColor&gt;%s&lt;/ForegroundColor&gt;
        ///&lt;BackgroundColor&gt;FF000000&lt;/BackgroundColor&gt;
        ///&lt;BackgroundStyle&gt;Transparent&lt;/BackgroundStyle&gt;
        ///&lt;HorizontalAlignment&gt;Center&lt;/HorizontalAlignment&gt;
        ///&lt;VerticalAlignment&gt;Baseline&lt;/VerticalAlignment&gt;
        ///&lt;Bold&gt;false&lt;/Bold&gt;
        ///&lt;Italic&gt;false&lt;/Italic&gt;
        ///&lt;Underlined&gt;false&lt;/Underlined&gt;
        ///.
        /// </summary>
        internal static string textsymbol {
            get {
                return ResourceManager.GetString("textsymbol", resourceCulture);
            }
        }
    }
}
